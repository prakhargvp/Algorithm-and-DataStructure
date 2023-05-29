// https://leetcode.com/problems/design-parking-system
class ParkingSystem {
public:

    int car[4];
    ParkingSystem(int big, int medium, int small) {
        car[1] = big, car[2] = medium, car[3] = small;
    }
    
    bool addCar(int carType) {
        if(car[carType] > 0) {
            car[carType]--;
            return true;
        }
        return false;
    }
};