#include "child_data_mgmt.h"
#include "stdlib.h"

struct _childDataMgmt{
 List* list;
};

ChildDataMgmt* cdm_create()
{
  ChildDataMgmt* cdm = (ChildDataMgmt*) malloc(sizeof(ChildDataMgmt));
  cdm->list = list_create();
  return cdm;
}

/**
 * Uses the child management logic to process child data
 * (hint: insert it, sorted by town into the internal list)
 */
void cdm_add_data(ChildDataMgmt *cdm, ChildData *data)
{
  list_add(cdm->list, data);
}

/**
 * Returns a pointer to the first element of the properly sorted list
 * (hint: "sorting" should have already happened when inserting)
 */
Node* cdm_get_sorted_data(ChildDataMgmt *cdm)
{
  return 0;
}

/**
 * Used to clean up memory allocated when creating the child management structure
 */
void cdm_delete(ChildDataMgmt *cdm)
{
 free(cdm);
}
