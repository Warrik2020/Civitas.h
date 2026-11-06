#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class ManGrid : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ManGrid(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "ManGrid") {}
    public:
        void Allocate(int menCap) const { void* args[] = { &menCap }; Call("Allocate", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void* Build(void* snap, int menCount, void* dep) const { void* args[] = { snap, &menCount, dep }; return Call("Build", args, 3); }
        int Pack(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallStaticValue<int>("Pack", args, 2); }
        int Bucket(int cx, int cy, int mask) const { void* args[] = { &cx, &cy, &mask }; return CallStaticValue<int>("Bucket", args, 3); }
        void Execute(int i) const { void* args[] = { &i }; Call("Execute", args, 1); }
        void Execute(int i) const { void* args[] = { &i }; Call("Execute", args, 1); }
        void Execute() const { Call("Execute", nullptr, 0); }
        void Execute(int i) const { void* args[] = { &i }; Call("Execute", args, 1); }
        void Execute(int b) const { void* args[] = { &b }; Call("Execute", args, 1); }
        void* start() const { return ReadField<void*>("start"); }
        void SetStart(void* value) const { WriteField<void*>("start", value); }
        void* cursor() const { return ReadField<void*>("cursor"); }
        void SetCursor(void* value) const { WriteField<void*>("cursor", value); }
        void* items() const { return ReadField<void*>("items"); }
        void SetItems(void* value) const { WriteField<void*>("items", value); }
        void* itemCell() const { return ReadField<void*>("itemCell"); }
        void SetItemCell(void* value) const { WriteField<void*>("itemCell", value); }
        void* keyOf() const { return ReadField<void*>("keyOf"); }
        void SetKeyOf(void* value) const { WriteField<void*>("keyOf", value); }
        void* cellOf() const { return ReadField<void*>("cellOf"); }
        void SetCellOf(void* value) const { WriteField<void*>("cellOf", value); }
        int buckets() const { return ReadField<int>("buckets"); }
        void SetBuckets(int value) const { WriteField<int>("buckets", value); }
        float cell() const { return ReadField<float>("cell"); }
        void SetCell(float value) const { WriteField<float>("cell", value); }
        float inv() const { return ReadField<float>("inv"); }
        void SetInv(float value) const { WriteField<float>("inv", value); }
        void* a() const { return ReadField<void*>("a"); }
        void SetA(void* value) const { WriteField<void*>("a", value); }
        void* snap() const { return ReadField<void*>("snap"); }
        void SetSnap(void* value) const { WriteField<void*>("snap", value); }
        void* keyOf() const { return ReadField<void*>("keyOf"); }
        void SetKeyOf(void* value) const { WriteField<void*>("keyOf", value); }
        void* cellOf() const { return ReadField<void*>("cellOf"); }
        void SetCellOf(void* value) const { WriteField<void*>("cellOf", value); }
        void* counts() const { return ReadField<void*>("counts"); }
        void SetCounts(void* value) const { WriteField<void*>("counts", value); }
        float inv() const { return ReadField<float>("inv"); }
        void SetInv(float value) const { WriteField<float>("inv", value); }
        int mask() const { return ReadField<int>("mask"); }
        void SetMask(int value) const { WriteField<int>("mask", value); }
        void* counts() const { return ReadField<void*>("counts"); }
        void SetCounts(void* value) const { WriteField<void*>("counts", value); }
        void* start() const { return ReadField<void*>("start"); }
        void SetStart(void* value) const { WriteField<void*>("start", value); }
        int buckets() const { return ReadField<int>("buckets"); }
        void SetBuckets(int value) const { WriteField<int>("buckets", value); }
        void* keyOf() const { return ReadField<void*>("keyOf"); }
        void SetKeyOf(void* value) const { WriteField<void*>("keyOf", value); }
        void* cellOf() const { return ReadField<void*>("cellOf"); }
        void SetCellOf(void* value) const { WriteField<void*>("cellOf", value); }
        void* cursor() const { return ReadField<void*>("cursor"); }
        void SetCursor(void* value) const { WriteField<void*>("cursor", value); }
        void* items() const { return ReadField<void*>("items"); }
        void SetItems(void* value) const { WriteField<void*>("items", value); }
        void* itemCell() const { return ReadField<void*>("itemCell"); }
        void SetItemCell(void* value) const { WriteField<void*>("itemCell", value); }
        void* start() const { return ReadField<void*>("start"); }
        void SetStart(void* value) const { WriteField<void*>("start", value); }
        void* items() const { return ReadField<void*>("items"); }
        void SetItems(void* value) const { WriteField<void*>("items", value); }
        void* itemCell() const { return ReadField<void*>("itemCell"); }
        void SetItemCell(void* value) const { WriteField<void*>("itemCell", value); }
    };
}
