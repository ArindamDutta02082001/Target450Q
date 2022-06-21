// link:https://practice.geeksforgeeks.org/problems/circular-tour/1#

int tour(petrolPump p[], int n)
{
    int petT = 0, disT = 0;
    for (int i = 0; i < n; i++)
    {
        petT += p[i].petrol;
        disT += p[i].distance;
    }
    if (petT < disT)
        return -1;

    int ans = 0, fuel = 0;
    for (int i = 0; i < n; i++)
    {
        fuel += p[i].petrol - p[i].distance;
        if (fuel < 0)
        {
            ans = i + 1;
            fuel = 0;
        }
    }
    return ans;
}