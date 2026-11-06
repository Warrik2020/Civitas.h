#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class NationBorder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationBorder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "NationBorder") {}
    public:
        int64_t StampOf(void* mil) const { void* __callArgs[] = { mil }; return CallStaticValue<int64_t>("StampOf", __callArgs, 1); }
        void Build(int nation, void* frontCells, void* grid, int64_t newStamp) const { void* __callArgs[] = { &nation, frontCells, grid, &newStamp }; Call("Build", __callArgs, 4); }
        bool BuildingFor(int nation, int64_t forStamp, void* grid) const { void* __callArgs[] = { &nation, &forStamp, grid }; return CallValue<bool>("BuildingFor", __callArgs, 3); }
        void BeginBuild(int nation, void* frontCells, void* grid, int64_t newStamp) const { void* __callArgs[] = { &nation, frontCells, grid, &newStamp }; Call("BeginBuild", __callArgs, 4); }
        bool Step(int work) const { void* __callArgs[] = { &work }; return CallValue<bool>("Step", __callArgs, 1); }
        void Drop() const { Call("Drop", nullptr, 0); }
        bool Own(void* grid, int t, int nation) const { void* __callArgs[] = { grid, &t, &nation }; return CallStaticValue<bool>("Own", __callArgs, 3); }
        void* Midpoint(int key, int width) const { void* __callArgs[] = { &key, &width }; return CallStatic("Midpoint", __callArgs, 2); }
        int TileOf(int key) const { void* __callArgs[] = { &key }; return CallStaticValue<int>("TileOf", __callArgs, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int64_t stamp() const { return ReadField<int64_t>("stamp"); }
        void stamp(int64_t value) const { WriteField<int64_t>("stamp", value); }
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
        void* chains() const { return ReadField<void*>("chains"); }
    };
}
