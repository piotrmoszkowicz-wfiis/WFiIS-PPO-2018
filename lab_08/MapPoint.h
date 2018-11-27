#pragma once

#include <iostream>
#include <cmath>

class MapPoint {
  public:
    /**
     * Klasa MapPoint przechowujaca wspolrzedne punktu
     * 
     * @param (double) lat    Latitude
     * @param (double) lon    Longtitude
     * 
     * @return (MapPoint)     Nowa instancja punktu
     */
    MapPoint(const double lat, const double lon);

    /**
     * Funkcja przenoszaca punkt o dana roznice wspolrzednych
     * 
     * @param (double) latDiff  Latitude difference
     * @param (double) lonDiff  Longtitude difference
     */
    void move(const double latDiff, const double lonDiff);

    /**
     * Funkcja wypisujaca punkt
     */
    void print() const;

    /**
     * Funkcja zwracajaca dystans pomiedzy dwoma punktami
     * 
     * @param (double) lat1   First latitude
     * @param (double) lon1   First longtitude
     * @param (double) lat2   Second latitude
     * @param (double) lon2   Second longtitude
     * 
     * @return (double)       Dystans miedzy punktami
     */
    static double getDistance(double lat1, double lon1, double lat2, double lon2);

    /**
     * Funkcja zwracajaca dalszy punkt
     * 
     * @param (MapPoint&) point1   First point
     * @param (MapPoint&) point2   Second point
     * 
     * @return (MapPoint&)     Punkt znajdujacy sie w dalszej odleglosci
     */
    MapPoint& furtherFrom(MapPoint& point1, MapPoint& point2) const;

    /**
     * Funkcja zwracajaca punkt pomiedzy dwoma
     * 
     * @param (MapPoint) point1   First point
     * @param (MapPoint) point2   Second point
     * 
     * @return (MapPoint)     Punkt znajdujacy sie pomiedzy dwoma zadanymi punktami
     */
    static MapPoint inTheMiddle(const MapPoint& point1, const MapPoint& point2);

  private:
    double _lat;
    double _lon;
};