#include <stdio.h>

int maximum_consequential_sum(int* nums );

int main()
{
    int n_day, cost_day, profit[50], total_revenue;
    unsigned i;

    while( scanf( "%d", &n_day ) != EOF ){

        scanf( "%d", &cost_day );

        for( i = 0; i < n_day; i++ ){
            scanf( "%d", &profit[i] );
        }

        total_revenue = maximum_consequential_sum( profit );

        printf( "%d\n", total_revenue );
    }

    return 0;
}

int maximum_consequential_sum(int* nums )
{
        int max_start_index = 0, max_end_index = 0;
        int max_sum = 0;
        int cur_index, cur_max_sum = 0;
        for(cur_index = 0; cur_index < sizeof(nums)/sizeof(nums[0]); cur_index++)
                if (cur_max_sum > max_sum)
                {
                        max_sum = cur_max_sum;
                        max_end_index = cur_index;
                }
                if (cur_max_sum < 0)
                {
                        cur_max_sum = 0 ;
                        max_start_index = cur_index + 1;
                }

        return max_sum;
}
