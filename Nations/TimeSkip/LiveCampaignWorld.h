#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class LiveCampaignWorld : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LiveCampaignWorld(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "LiveCampaignWorld") {}
    public:
        float Random01() const { return CallValue<float>("Random01", nullptr, 0); }
        void CollectWars(void* into) const { void* __callArgs[] = { into }; Call("CollectWars", __callArgs, 1); }
        void* Nation(int id) const { void* __callArgs[] = { &id }; return Call("Nation", __callArgs, 1); }
        void BorderTiles(int id, void* into) const { void* __callArgs[] = { &id, into }; Call("BorderTiles", __callArgs, 2); }
        void* Divisions(int id) const { void* __callArgs[] = { &id }; return Call("Divisions", __callArgs, 1); }
        void* FrontOf(int divisionId) const { void* __callArgs[] = { &divisionId }; return Call("FrontOf", __callArgs, 1); }
        void* Cities(int id) const { void* __callArgs[] = { &id }; return Call("Cities", __callArgs, 1); }
        float DefenceAt(int tile) const { void* __callArgs[] = { &tile }; return CallValue<float>("DefenceAt", __callArgs, 1); }
        void Paint(int nationId, void* tiles) const { void* __callArgs[] = { &nationId, tiles }; Call("Paint", __callArgs, 2); }
        bool CanStand(void* d) const { void* __callArgs[] = { d }; return CallValue<bool>("CanStand", __callArgs, 1); }
        void Relocate(void* d, void* near_) const { void* __callArgs[] = { d, near_ }; Call("Relocate", __callArgs, 2); }
        void Bleed(void* rel, int id, float men) const { void* __callArgs[] = { rel, &id, &men }; Call("Bleed", __callArgs, 3); }
    };
}
