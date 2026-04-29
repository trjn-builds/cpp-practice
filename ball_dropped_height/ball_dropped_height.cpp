#include <iostream>
#include <cmath>

double get_tower_height()
{
    std::cout << "Enter the height of the tower in meters: ";
    double tower_height;
    std::cin >> tower_height;
    return tower_height;
}

double get_seconds_interval()
{
    std::cout << "Enter how many seconds each interval should be: ";
    double interval;
    std::cin >> interval;
    return interval;
}

double calculate_distance_fallen(double seconds)
{
    return 0.5 * 9.8 * seconds * seconds;
}

int main() 
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    while (true){
        double tower_height {get_tower_height()};
        double interval {get_seconds_interval()};
        double seconds {};
        double distance_fallen {};
        while (tower_height > distance_fallen){
            distance_fallen = calculate_distance_fallen(seconds);
            if (tower_height > distance_fallen){
                std::cout << "At " << seconds << " seconds, the ball is at height: " << tower_height - distance_fallen << " meters (speed = " << 9.8 * seconds << "m/s)\n";
                seconds += interval;
            } else {
                std::cout << "At " << seconds << " seconds, the ball is on the ground (exact time = " << sqrt(2*tower_height/9.8) << " seconds)\n";
            }
        }
    }

    return 0;
}