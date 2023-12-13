#include <stdio.h>
#include <stdlib.h>

struct per
{
    int id;
    struct per* next;
};

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    struct per *head,*end,*p;
    head=end=p=NULL;
    p=(struct per*) malloc(sizeof(struct per));
    head=p;
    p->id=1;
    p->next=NULL;
    end=p;
    for (int i = 1; i < m; i++)
    {
        p=(struct per*) malloc(sizeof(struct per));
        p->id=i+1;
        end->next=p;
        end=p;
        p->next=NULL;
    }
    end->next=head;
    p=end;
    end=NULL;
    while (p->next!=p)
    {
        for (int i = 0; i < n-1; i++)
        {
            p=p->next;
        }
        printf("%d,",p->next->id);
        struct per* ne=p->next;
        p->next=p->next->next;
        free(ne);
    }
    printf("%d,",p->id);
    free(p);
}