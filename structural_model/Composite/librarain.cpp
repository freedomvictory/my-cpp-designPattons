//
// Created by Administrator on 5/20/2020.
//

#include "librarain.h"
#include "BookGroup.h"
#include "Book.h"

librarain::librarain()
        : m_pBookCollection(new BookGroup(std::string("Book Collection")))
{
    BuildBookCollection();
}

librarain::~librarain() {
    delete m_pBookCollection;
}

void librarain::BuildBookCollection()
{
    AddBookToGroup(m_pBookCollection,
                   std::string("Merriam-Webster's Collegiate Dictionary"),
                   std::string("Merriam-Webster"));

    m_pBookCollection->Add(BuildFictionGroup());
    m_pBookCollection->Add(BuildNonfictionGroup());

}

BookComponent * librarain::BuildFictionGroup()
{
    BookComponent * fictionGroup = new BookGroup(std::string("Fiction"));

    fictionGroup->Add(BuildKidsGroup());

    return fictionGroup;
}

BookComponent * librarain::BuildNonfictionGroup()
{
    BookComponent * nonfictionGroup = new BookGroup(std::string("Nonfiction"));

    nonfictionGroup->Add(BuildBiographyGroup());

    return nonfictionGroup;
}

BookComponent * librarain::BuildKidsGroup()
{
    BookComponent * kidsGroup =
            new BookGroup(std::string("Kids"));

    AddBookToGroup(kidsGroup,
                   std::string("Green Eggs and Ham"),
                   std::string("Dr. Suess"));

    kidsGroup->Add(BuildKidsAges3To5Group());

    return kidsGroup;
}

BookComponent * librarain::BuildKidsAges3To5Group()
{
    BookComponent * kidsAges3To5Group =
            new BookGroup(std::string("Kids (Ages 3-5)"));

    AddBookToGroup(kidsAges3To5Group,
                   std::string("Goodnight Moon"),
                   std::string("Margaret Wise Brown"));

    return kidsAges3To5Group;
}

BookComponent * librarain::BuildBiographyGroup()
{
    BookComponent * biographyGroup = new BookGroup(std::string("Biography"));

    AddBookToGroup(biographyGroup,
                   std::string("Steve Jobs"),
                   std::string("Walter Isaacson"));

    return biographyGroup;
}

void librarain::AddBookToGroup(BookComponent * group,
                               std::string bookTitle, std::string author)
{
    BookComponent * book = new Book(bookTitle, author);
    group->Add(book);
}

void librarain::DisplayBookCollection()
{
    m_pBookCollection->DisplayInfo();
}