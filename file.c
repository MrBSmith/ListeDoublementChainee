// Initization function for queues
Queue* queue_init(){
    Queue* p_new_queue = malloc(sizeof(Queue));

    // Error when loading the pile exit program
    if(p_new_queue == NULL){
        exit(EXIT_FAILURE);
    }

    // Setup the new pile to be empty
    p_new_queue -> first = NULL;

    return p_new_queue;
}
