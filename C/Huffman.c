#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node//hamza
{
    char data;
    int freq;
    struct Node *left, *right;
};

// structure
struct MinHeap//helal
{
    int size;
    int capacity;
    struct Node** array;
};

struct Node* newNode(char data, int freq)//hamza
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;
    return temp;
}

void swapNode(struct Node** a, struct Node** b)//helal
{
    struct Node* t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(struct MinHeap* minHeap, int idx)//hamza
{
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < minHeap->size &&
            minHeap->array[left]->freq < minHeap->array[smallest]->freq)
        smallest = left;

    if (right < minHeap->size &&
            minHeap->array[right]->freq < minHeap->array[smallest]->freq)
        smallest = right;

    if (smallest != idx)
    {
        swapNode(&minHeap->array[smallest], &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}

struct Node* extractMin(struct MinHeap* minHeap)//helal
{
    struct Node* temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    --minHeap->size;
    minHeapify(minHeap, 0);
    return temp;
}

void insertMinHeap(struct MinHeap* minHeap, struct Node* node)//hamza
{
    ++minHeap->size;
    int i = minHeap->size - 1;
    while (i && node->freq < minHeap->array[(i - 1) / 2]->freq)
    {
        minHeap->array[i] = minHeap->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    minHeap->array[i] = node;
}

struct Node* buildHuffmanTree(char data[], int freq[], int size)//helal
{
    struct MinHeap* minHeap = (struct MinHeap*) malloc(sizeof(struct MinHeap));
    minHeap->size = size;
    minHeap->capacity = size;
    minHeap->array = (struct Node**) malloc(size * sizeof(struct Node*));

    for (int i = 0; i < size; ++i)
        minHeap->array[i] = newNode(data[i], freq[i]);

    for (int i = (size - 2) / 2; i >= 0; --i)
        minHeapify(minHeap, i);

    while (minHeap->size > 1)
    {
        struct Node* left = extractMin(minHeap);
        struct Node* right = extractMin(minHeap);
        struct Node* top = newNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;
        insertMinHeap(minHeap, top);
    }
    return extractMin(minHeap);
}

void printCodes(struct Node* root, int arr[], int top)//hamza
{
    if (root->left)
    {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }
    if (root->right)
    {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }
    if (!root->left && !root->right)
    {
        printf("%c: ", root->data);
        for (int i = 0; i < top; i++)
            printf("%d", arr[i]);
        printf("\n");
    }
}

int main()//helal
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    char data[256];
    int count = 0;

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            data[count] = (char)i;
            freq[count] = freq[i];
            count++;
        }
    }

    struct Node* root = buildHuffmanTree(data, freq, count);
    int arr[100];
    printf("\nHuffman Codes:\n");
    printCodes(root, arr, 0);

    return 0;
}
