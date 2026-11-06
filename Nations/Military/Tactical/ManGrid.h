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
        void Allocate(int menCap) const { void* __callArgs[] = { &menCap }; Call("Allocate", __callArgs, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void* Build(void* snap, int menCount, void* dep) const { void* __callArgs[] = { snap, &menCount, dep }; return Call("Build", __callArgs, 3); }
        int Pack(int cx, int cy) const { void* __callArgs[] = { &cx, &cy }; return CallStaticValue<int>("Pack", __callArgs, 2); }
        int Bucket(int cx, int cy, int mask) const { void* __callArgs[] = { &cx, &cy, &mask }; return CallStaticValue<int>("Bucket", __callArgs, 3); }
        void* start() const { return ReadField<void*>("start"); }
        void start(void* value) const { WriteField<void*>("start", value); }
        void* cursor() const { return ReadField<void*>("cursor"); }
        void cursor(void* value) const { WriteField<void*>("cursor", value); }
        void* items() const { return ReadField<void*>("items"); }
        void items(void* value) const { WriteField<void*>("items", value); }
        void* itemCell() const { return ReadField<void*>("itemCell"); }
        void itemCell(void* value) const { WriteField<void*>("itemCell", value); }
        void* keyOf() const { return ReadField<void*>("keyOf"); }
        void keyOf(void* value) const { WriteField<void*>("keyOf", value); }
        void* cellOf() const { return ReadField<void*>("cellOf"); }
        void cellOf(void* value) const { WriteField<void*>("cellOf", value); }
        int buckets() const { return ReadField<int>("buckets"); }
        void buckets(int value) const { WriteField<int>("buckets", value); }
        float cell() const { return ReadField<float>("cell"); }
        void cell(float value) const { WriteField<float>("cell", value); }
        float inv() const { return ReadField<float>("inv"); }
        void inv(float value) const { WriteField<float>("inv", value); }
    };
}
