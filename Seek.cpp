#include <cmath>
#include "Seek.h"

using namespace std;

Seek::Seek()
{
    settleTime = 1.0; // time in millisecond
    accelleration = 0.098; // in ???
    seekTimeMax = seekTimeAvg = 0.0; // both are represent in millisecond
    actualTrack = 0; // Start in track 0 most OD in HDD
}

void Seek::setSeekTimeMax( double seekTime )
{
    if( seekTime > seekTimeMax )
        seekTimeMax = seekTime;
}

void Seek::setSeekTimeAvg( double seekTime )
{
    seekTimeAvg += seekTime;
}

double Seek::getSeekTimeMax()
{
    return seekTimeMax;
}

double Seek::getSeekTimeAvg( int number_of_request )
{
    return ( double ) seekTimeAvg / number_of_request;
}

double Seek::findSeek( int dist, int nTotalTrack, double radius )
{
    double distance = dist / ( nTotalTrack / radius );
    double travel = 2 * sqrt( distance / accelleration );

    return ( travel + settleTime ) / 1000.00; // Seek time is equal to travel time + settle time * k
}
