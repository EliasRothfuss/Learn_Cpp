#define CVPLOT_HEADER_ONLY  // necessary to use CvPlot as a pure template library
#include <CvPlot/cvplot.h>
#include <rapidcsv.h>

#include <iostream>
#include <string>
#include <utility>
#include <vector>

auto main() -> int
{
    /**
     * The dataset for this evaluation was taken from
     * https://www.ncei.noaa.gov/metadata/geoportal/rest/metadata/item/gov.noaa.ncdc:C00947/html
     * The dataset for this documentation can be found at
     * https://www.ncei.noaa.gov/data/global-summary-of-the-year/doc/GSOM_GSOY_Description_Document_v1.0.2_20200219.pdf
     * The overview of all available weather stations is given in
     * https://www.ncei.noaa.gov/pub/data/ghcn/daily/ghcnd-stations.txt
     */

    /**
     * read in the csv document
     * ConverterParams need to take into account, because there are empty/invalid entries
     */
    rapidcsv::Document doc(std::string(RESOURCEPATH) + "/GME00102404.csv", rapidcsv::LabelParams(0, 0),
                           rapidcsv::SeparatorParams(), rapidcsv::ConverterParams(true));

    // read in the dates
    auto dates = doc.GetColumn<int>("DATE");
    // read in the average temperature of the year
    auto tavg = doc.GetColumn<float>("TAVG");
    // read in the max temperature of the year
    auto emxt = doc.GetColumn<float>("EMXT");
    // read in the min temperature of the year
    auto emnt = doc.GetColumn<float>("EMNT");
    
    auto fzf1 = doc.GetColumn<float>("FZF1");

    // prepare axes object
    auto axes = CvPlot::makePlotAxes();

    // plot the average temperature
    axes.create<CvPlot::Series>(dates, tavg, "-g");

    // plot the extreme max temperature
    axes.create<CvPlot::Series>(dates, emxt, "-b");

    // plot the extreme max temperature
    axes.create<CvPlot::Series>(dates, emnt, "-r");
    axes.create<CvPlot::Series>(dates, fzf1, "-b");

    // some settings for the plot
    axes.title("Weather analysis over years in Konstanz");
    axes.yLabel("Temperature in C");
    axes.xLabel("Year");

    // render the axes into a cv Mat
    cv::Mat mat = axes.render(600, 1200);
    // write the plot to file
    cv::imwrite("weather_over_years_konstanz.png", mat);

    return 0;
}