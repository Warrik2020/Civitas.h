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
        void Ensure(void* grid, void* cities, int tick) const { void* args[] = { grid, cities, &tick }; CallStatic("Ensure", args, 3); }
        bool Usable(void* grid, void* p, int nationId, bool allowOpenTo) const { void* args[] = { grid, &p, &nationId, &allowOpenTo }; return CallStaticValue<bool>("Usable", args, 4); }
        bool PortAt(void* grid, int landTile, int nationId, bool allowOpenTo, void* port) const { void* args[] = { grid, &landTile, &nationId, &allowOpenTo, &port }; return CallStaticValue<bool>("PortAt", args, 5); }
        void PortsNear(void* grid, int nationId, void* near, float maxDist, bool allowOpenTo, bool skipBlockaded, int max, void* into) const { void* args[] = { grid, &nationId, near, &maxDist, &allowOpenTo, &skipBlockaded, &max, into }; CallStatic("PortsNear", args, 8); }
        bool ByCityTile(int cityTile, void* port) const { void* args[] = { &cityTile, &port }; return CallStaticValue<bool>("ByCityTile", args, 2); }
        int cityId() const { return ReadField<int>("cityId"); }
        void SetCityId(int value) const { WriteField<int>("cityId", value); }
        int cityTile() const { return ReadField<int>("cityTile"); }
        void SetCityTile(int value) const { WriteField<int>("cityTile", value); }
        int quayTile() const { return ReadField<int>("quayTile"); }
        void SetQuayTile(int value) const { WriteField<int>("quayTile", value); }
        int portWater() const { return ReadField<int>("portWater"); }
        void SetPortWater(int value) const { WriteField<int>("portWater", value); }
        int x() const { return ReadField<int>("x"); }
        void SetX(int value) const { WriteField<int>("x", value); }
        int y() const { return ReadField<int>("y"); }
        void SetY(int value) const { WriteField<int>("y", value); }
    };
}
