#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class PeopleField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "PeopleField") {}
    public:
        void MarkSeeded() const { Call("MarkSeeded", nullptr, 0); }
        int ChunkOf(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("ChunkOf", __callArgs, 2); }
        int ChunkOfTile(int tile) const { void* __callArgs[] = { &tile }; return CallValue<int>("ChunkOfTile", __callArgs, 1); }
        float Get(int tile) const { void* __callArgs[] = { &tile }; return CallValue<float>("Get", __callArgs, 1); }
        float Get(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<float>("Get", __callArgs, 2); }
        bool IsEmpty(int tile) const { void* __callArgs[] = { &tile }; return CallValue<bool>("IsEmpty", __callArgs, 1); }
        void* ReadPage(int chunk) const { void* __callArgs[] = { &chunk }; return Call("ReadPage", __callArgs, 1); }
        double ChunkSum(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<double>("ChunkSum", __callArgs, 1); }
        void Set(int tile, float value) const { void* __callArgs[] = { &tile, &value }; Call("Set", __callArgs, 2); }
        void Add(int tile, float delta) const { void* __callArgs[] = { &tile, &delta }; Call("Add", __callArgs, 2); }
        double RealmPeople(int nation) const { void* __callArgs[] = { &nation }; return CallValue<double>("RealmPeople", __callArgs, 1); }
        double RealmTilePeople(int nation) const { void* __callArgs[] = { &nation }; return CallValue<double>("RealmTilePeople", __callArgs, 1); }
        double PendingOf(int nation) const { void* __callArgs[] = { &nation }; return CallValue<double>("PendingOf", __callArgs, 1); }
        int RealmTiles(int nation) const { void* __callArgs[] = { &nation }; return CallValue<int>("RealmTiles", __callArgs, 1); }
        void Book(int nation, double delta) const { void* __callArgs[] = { &nation, &delta }; Call("Book", __callArgs, 2); }
        void SetRealmPeople(int nation, double people) const { void* __callArgs[] = { &nation, &people }; Call("SetRealmPeople", __callArgs, 2); }
        void OnOwnerWritten(int tile, int was, int now) const { void* __callArgs[] = { &tile, &was, &now }; Call("OnOwnerWritten", __callArgs, 3); }
        void RecountRealms() const { Call("RecountRealms", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void ScaleRealms(void* target) const { void* __callArgs[] = { target }; Call("ScaleRealms", __callArgs, 1); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
        int PageLen() const { return ReadStaticField<int>("PageLen"); }
        float EmptyBelow() const { return ReadStaticField<float>("EmptyBelow"); }
    };
}
