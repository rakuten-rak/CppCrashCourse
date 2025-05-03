// #include <compare>
// #include <iostream>
// #include <set>


// struct Point 
// {
//     int x;
//     int y;
//     auto operator<=>(const Point &) const = default;
// };




// int main(){
//     Point pt{1,2}, pt2{3,1};
//     std::set<Point> s;
//     s.insert(pt);

//     std::cout << std::boolalpha
//     << (pt == pt2) << ' ' // false; operator == is implicitly default
//     << (pt != pt2) << ' ' // true
//     << (pt < pt2) << ' '
//     << (pt <= pt2) << ' '
//     << (pt > pt2) << ' ' // false
//     << (pt >= pt2) << ' '
//     ; // false

//     // std::cout << std::s;
// }