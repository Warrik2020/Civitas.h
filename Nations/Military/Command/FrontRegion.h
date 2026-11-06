#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class FrontRegion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontRegion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "FrontRegion") {}
    public:
        bool Collect(void* border, void* grid, int nation, void* foes, void* points, float radius, void* into, bool& whole) const { void* args[] = { border, grid, &nation, foes, points, &radius, into, &whole }; return CallStaticValue<bool>("Collect", args, 8); }
        bool NearestEdge(void* border, void* grid, void* p, float radius, int& chain, int& index, int foe = -1) const { void* args[] = { border, grid, p, &radius, &chain, &index, &foe }; return CallStaticValue<bool>("NearestEdge", args, 7); }
        int NearestOn(void* ch, int width, void* p) const { void* args[] = { ch, &width, p }; return CallStaticValue<int>("NearestOn", args, 3); }
        void Between(void* ch, int a, int b, int width, void* into, void* foes) const { void* args[] = { ch, &a, &b, &width, into, foes }; CallStatic("Between", args, 6); }
        void Around(void* ch, int centre, float length, int width, void* into, void* foes) const { void* args[] = { ch, &centre, &length, &width, into, foes }; CallStatic("Around", args, 6); }
        void* Bounds(void* area) const { void* args[] = { area }; return CallStatic("Bounds", args, 1); }
        bool Alongside(void* area, void* box, int edge, int width) const { void* args[] = { area, box, &edge, &width }; return CallStaticValue<bool>("Alongside", args, 4); }
        float AreaReach() const { return ReadStaticField<float>("AreaReach"); }
        float AreaEndSlack() const { return ReadStaticField<float>("AreaEndSlack"); }
        float AreaMinTiles() const { return ReadStaticField<float>("AreaMinTiles"); }
        float AreaMaxTiles() const { return ReadStaticField<float>("AreaMaxTiles"); }
        void* bits() const { return ReadField<void*>("bits"); }
        void SetBits(void* value) const { WriteField<void*>("bits", value); }
        bool used() const { return ReadField<bool>("used"); }
        void SetUsed(bool value) const { WriteField<bool>("used", value); }
        int lastUse() const { return ReadField<int>("lastUse"); }
        void SetLastUse(int value) const { WriteField<int>("lastUse", value); }
    };
}
