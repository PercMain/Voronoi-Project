//
//  main.cpp
//  voronoi_0
//
//  Created by Ben Lewson on 3/9/17.
//  Copyright © 2017 Ben Lewson. All rights reserved.
//

#include "Geometry.hpp"

using namespace std;

//Initial Data
vector <point> points =
{
     {100.0, 100.0}
    ,{200.0, 200.0}
    ,{300.0, 100.0}
};

/*
double minX = 0.0, maxX = 400.0, minY = 0.0, maxY = 400.0;

double sweep = 0.0;
*/

//Main Loop
int main(int argc, const char * argv[]) {
    
    for(int i = 0; i < points.size(); i++)
    {
        cout << points.at(i).X << " " << points.at(i).Y << "\n";
    }
    
    point cen = circCenter(points.at(0), points.at(1), points.at(2));
    
    printf("\nCenter = %f,%f\n", cen.X, cen.Y);
    
    return 0;
}

