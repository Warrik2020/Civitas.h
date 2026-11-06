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
        int64_t StampOf(void* mil) const { void* args[] = { mil }; return CallStaticValue<int64_t>("StampOf", args, 1); }
        void Build(int nation, void* frontCells, void* grid, int64_t newStamp) const { void* args[] = { &nation, frontCells, grid, &newStamp }; Call("Build", args, 4); }
        bool BuildingFor(int nation, int64_t forStamp, void* grid) const { void* args[] = { &nation, &forStamp, grid }; return CallValue<bool>("BuildingFor", args, 3); }
        void BeginBuild(int nation, void* frontCells, void* grid, int64_t newStamp) const { void* args[] = { &nation, frontCells, grid, &newStamp }; Call("BeginBuild", args, 4); }
        bool Step(int work) const { void* args[] = { &work }; return CallValue<bool>("Step", args, 1); }
        void Drop() const { Call("Drop", nullptr, 0); }
        bool Own(void* grid, int t, int nation) const { void* args[] = { grid, &t, &nation }; return CallStaticValue<bool>("Own", args, 3); }
        void* Midpoint(int key, int width) const { void* args[] = { &key, &width }; return CallStatic("Midpoint", args, 2); }
        int TileOf(int key) const { void* args[] = { &key }; return CallStaticValue<int>("TileOf", args, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int64_t stamp() const { return ReadField<int64_t>("stamp"); }
        void SetStamp(int64_t value) const { WriteField<int64_t>("stamp", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        void* chains() const { return ReadField<void*>("chains"); }
    };
}
