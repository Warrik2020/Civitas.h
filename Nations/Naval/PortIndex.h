#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class PortIndex : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PortIndex(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "PortIndex") {}
    public:
        void Invalidate() const { CallStatic("Invalidate", nullptr, 0); }
        void Ensure(void* grid, void* cities, int tick) const { void* __callArgs[] = { grid, cities, &tick }; CallStatic("Ensure", __callArgs, 3); }
        bool Usable(void* grid, void* p, int nationId, bool allowOpenTo) const { void* __callArgs[] = { grid, &p, &nationId, &allowOpenTo }; return CallStaticValue<bool>("Usable", __callArgs, 4); }
        bool PortAt(void* grid, int landTile, int nationId, bool allowOpenTo, void* port) const { void* __callArgs[] = { grid, &landTile, &nationId, &allowOpenTo, &port }; return CallStaticValue<bool>("PortAt", __callArgs, 5); }
        void PortsNear(void* grid, int nationId, void* near_, float maxDist, bool allowOpenTo, bool skipBlockaded, int max_, void* into) const { void* __callArgs[] = { grid, &nationId, near_, &maxDist, &allowOpenTo, &skipBlockaded, &max_, into }; CallStatic("PortsNear", __callArgs, 8); }
        bool ByCityTile(int cityTile, void* port) const { void* __callArgs[] = { &cityTile, &port }; return CallStaticValue<bool>("ByCityTile", __callArgs, 2); }
    };
}
