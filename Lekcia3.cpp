#include <iostream>
struct vec3
{
    float x, y, z; 
};
struct Ray
{
    vec3 origin; //Пробуем гит еще раз на второй ветке
    vec3 direction;
};
struct Plane
{
    vec3 point;
    vec3 norm;
};

float dot(vec3 a, vec3 b){
    return a.x * b.x + a.y * b.y + a.z * b.z;
}
vec3 rayPlaneIntersection(Ray ray, Plane plane){
    float a = dot(plane.point, plane.norm);
    float b = dot(ray.origin, plane.norm);
    float d = dot(ray.direction, plane.norm);
    float c = (a - b) /d;
    return {
        ray.origin.x + ray.direction.x * c,
        ray.origin.y + ray.direction.y * c,
        ray.origin.z + ray.direction.z * c,
    };  
}

int main (){
    vec3 origin, direction, point, norm;
    std::cin >> origin.x >> origin.y >> origin.z;
    std::cin >> direction.x >> direction.y >> direction.z;
    std::cin >> point.x >> point.y >> point.z;
    std::cin >> norm.x >> norm.y >> norm.z;
    vec3 g = rayPlaneIntersection(Ray{origin, direction}, Plane{point, norm});
    std::cout << g.x << " " << g.y << " " << g.z << std::endl;
}