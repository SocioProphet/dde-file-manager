#include "dbookmarkitemgroup.h"
#include "dbookmarkitem.h"

DBookmarkItemGroup::DBookmarkItemGroup()
{

}

void DBookmarkItemGroup::addItem(DBookmarkItem *item)
{
    m_items.append(item);
    item->setItemGroup(this);
}

void DBookmarkItemGroup::insert(int index, DBookmarkItem *item)
{
    m_items.insert(index, item);
}

void DBookmarkItemGroup::removeItem(DBookmarkItem *item)
{
    m_items.removeOne(item);
}

void DBookmarkItemGroup::deselectAll()
{
    for(int i = 0; i < m_items.size(); i++)
    {
        m_items.at(i)->setChecked(false);
    }
}

QList<DBookmarkItem *> * DBookmarkItemGroup::items()
{
    return &m_items;
}
