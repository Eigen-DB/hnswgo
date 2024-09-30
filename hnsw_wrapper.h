#ifdef __cplusplus
extern "C" {
#endif
    typedef void* HNSW;
    typedef unsigned long label_t;
    char* peekLastErrorMsg();
    char* getLastErrorMsg();
    HNSW initHNSW(int dim, unsigned long maxElements, int m, int efConstruction, int randSeed, char simMetric);
    void freeHNSW(HNSW hnswIndex);
    void insertVector(HNSW hnswIndex, float *vector, label_t label);
    float* getVector(HNSW hnswIndex, label_t label, int dim);
    void deleteVector(HNSW hnswIndex, label_t label);
    int searchKNN(HNSW hnswIndex, float *vector, int k, label_t *labels, float *distances);
    void setEf(HNSW hnswIndex, int ef);
    HNSW loadSavedIndex(char *location, int dim, char spaceType, unsigned long maxElements);
    void saveIndex(HNSW index, char *location);
#ifdef __cplusplus
}
#endif
