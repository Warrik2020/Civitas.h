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
        int ChunkOf(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("ChunkOf", args, 2); }
        int ChunkOfTile(int tile) const { void* args[] = { &tile }; return CallValue<int>("ChunkOfTile", args, 1); }
        float Get(int tile) const { void* args[] = { &tile }; return CallValue<float>("Get", args, 1); }
        float Get(int x, int y) const { void* args[] = { &x, &y }; return CallValue<float>("Get", args, 2); }
        bool IsEmpty(int tile) const { void* args[] = { &tile }; return CallValue<bool>("IsEmpty", args, 1); }
        void* ReadPage(int chunk) const { void* args[] = { &chunk }; return Call("ReadPage", args, 1); }
        double ChunkSum(int chunk) const { void* args[] = { &chunk }; return CallValue<double>("ChunkSum", args, 1); }
        void Set(int tile, float value) const { void* args[] = { &tile, &value }; Call("Set", args, 2); }
        void Add(int tile, float delta) const { void* args[] = { &tile, &delta }; Call("Add", args, 2); }
        double RealmPeople(int nation) const { void* args[] = { &nation }; return CallValue<double>("RealmPeople", args, 1); }
        double RealmTilePeople(int nation) const { void* args[] = { &nation }; return CallValue<double>("RealmTilePeople", args, 1); }
        double PendingOf(int nation) const { void* args[] = { &nation }; return CallValue<double>("PendingOf", args, 1); }
        int RealmTiles(int nation) const { void* args[] = { &nation }; return CallValue<int>("RealmTiles", args, 1); }
        void Book(int nation, double delta) const { void* args[] = { &nation, &delta }; Call("Book", args, 2); }
        void SetRealmPeople(int nation, double people) const { void* args[] = { &nation, &people }; Call("SetRealmPeople", args, 2); }
        void OnOwnerWritten(int tile, int was, int now) const { void* args[] = { &tile, &was, &now }; Call("OnOwnerWritten", args, 3); }
        void RecountRealms() const { Call("RecountRealms", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void ScaleRealms(void* target) const { void* args[] = { target }; Call("ScaleRealms", args, 1); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
        int PageLen() const { return ReadStaticField<int>("PageLen"); }
        float EmptyBelow() const { return ReadStaticField<float>("EmptyBelow"); }
    };
}
