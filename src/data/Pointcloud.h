#ifndef SRC_DATA_POINTCLOUD_H_
#define SRC_DATA_POINTCLOUD_H_

#include <eigen3/Eigen/Dense>
#include "geometry.h"

/** \brief a laserscan with possibly remission.
 *
 *  \author behley
 */

class Laserscan {
 public:
  void clear() {
    points.clear();
    remissions.clear();
    rings.clear();
  }
  uint32_t size() const { return points.size(); }
  bool hasRemissions() const { return (points.size() > 0) && (points.size() == remissions.size()); }

  Eigen::Matrix4f pose;
  std::vector<Point3f> points;
  std::vector<float> remissions;
  std::vector<float> rings;
};

#endif /* SRC_DATA_POINTCLOUD_H_ */
