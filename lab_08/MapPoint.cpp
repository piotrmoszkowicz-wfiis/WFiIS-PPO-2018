#include "MapPoint.h"

MapPoint::MapPoint(const double lat, const double lon) {
  _lat = lat;
  _lon = lon;
};

void MapPoint::move(const double latDiff, const double lonDiff) {
  _lat+=latDiff;
  _lon+=lonDiff;
};

void MapPoint::print() const {
  char latLetter = 'N';
  char lonLetter = 'E';

  if (_lat < 0) {
    latLetter = 'S';
  }

  if (_lon < 0) {
    lonLetter = 'W';
  }

  std::cout << "Point (" << fabs(_lat) << latLetter << ", " << fabs(_lon) << lonLetter << ")" << std::endl;
};

double MapPoint::getDistance(double lat1, double lon1, double lat2, double lon2) {
  return sqrt(pow(lat1 + lat2, 2) + pow(lon1 + lon2, 2));
};

MapPoint& MapPoint::furtherFrom(MapPoint& point1, MapPoint& point2) const {
  if (MapPoint::getDistance(this->_lat, this->_lon, point1._lat, point1._lon) > MapPoint::getDistance(this->_lat, this->_lon, point2._lat, point2._lon)) {
    return point1;
  }
  return point2;
};

MapPoint MapPoint::inTheMiddle(const MapPoint& point1, const MapPoint& point2) {
  const double lat = (point1._lat + point2._lat) / 2;
  const double lon = (point1._lon + point2._lon) / 2;

  return MapPoint(lat, lon);
};