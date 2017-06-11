#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.14159265359
#define RPM_TO_RAD_PER_SEC 0.104719755120

typedef struct{
    int radius;
    int number;
    bool double_sided;
}PLATTER_DATA;


typedef struct{
    PLATTER_DATA platter;
    int rpm;
    int spindler_radius;
}HD_PHYSIC_DATA;


typedef struct{
    int number_of_track;
    int* number_of_block_per_track;
}HD_LOGIC_DATA;


int theoretical_data_rate( const int bpi, const int radius, const int rpm );

double tangential_velocity( const int rpm, const int radius );

int track_per_inch( const int track_width, const int track_gap );

int bits_per_inch( const int density_ratio, const int flux_change_density );

int number_of_track_per_platter( const int tpi, const int platter_radius, const int spindler_radius );

double area_density( const int tpi, const int bpi );

double area_of_the_platter( const int platter_radius, const int splndle_radius  );

double disk_capacity( const double area_density, const double disk_area );


int main()
{
    return 0;
}

int theoretical_data_rate( const int bpi, const int radius, const int rpm )
{
    return bpi * ( 2 * PI * radius ) * rpm;
}


double tangential_velocity( const int rpm, const int radius )
{
    return ( double ) rpm * RPM_TO_RAD_PER_SEC * radius;
}


int track_per_inch( const int track_width, const int track_gap )
{
    int tpi = 1 / ( track_width + track_gap );
    return tpi;
}


int bits_per_inch( const int density_ratio, const int flux_change_density )
{
    int bpi = density_ratio * flux_change_density;
    return bpi;
}


int number_of_track_per_platter( const int tpi, const int platter_radius, const int spindler_radius )
{
    return tpi * ( platter_radius - spindler_radius );
}


double area_density( const int tpi, const int bpi )
{
    return tpi * bpi;
}


double area_of_the_platter( const int platter_radius, const int splndle_radius  )
{
    return PI * ( pow( platter_radius, 2 ) - pow( splndle_radius, 2 ) );
}


double disk_capacity( const double area_density, const double disk_area )
{
    return area_density * disk_area;
}
