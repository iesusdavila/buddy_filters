#pragma once
#include "FaceFilterBase.hpp"
#include <opencv2/opencv.hpp>

class GlassesFilter : public FaceFilter {
public:
    GlassesFilter(const std::string& assets_path);
    
    std::pair<int, int> getLandmarkIndices() const override;
    FilterParams getFilterParams() const override;
    std::pair<int, int> calculatePosition(const cv::Mat& rotated_asset, const std::vector<cv::Point2f>& landmarks) const override;
};