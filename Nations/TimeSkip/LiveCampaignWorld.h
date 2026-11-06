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
        void CollectWars(void* into) const { void* args[] = { into }; Call("CollectWars", args, 1); }
        void* Nation(int id) const { void* args[] = { &id }; return Call("Nation", args, 1); }
        void BorderTiles(int id, void* into) const { void* args[] = { &id, into }; Call("BorderTiles", args, 2); }
        void* Divisions(int id) const { void* args[] = { &id }; return Call("Divisions", args, 1); }
        void* FrontOf(int divisionId) const { void* args[] = { &divisionId }; return Call("FrontOf", args, 1); }
        void* Cities(int id) const { void* args[] = { &id }; return Call("Cities", args, 1); }
        float DefenceAt(int tile) const { void* args[] = { &tile }; return CallValue<float>("DefenceAt", args, 1); }
        void Paint(int nationId, void* tiles) const { void* args[] = { &nationId, tiles }; Call("Paint", args, 2); }
        bool CanStand(void* d) const { void* args[] = { d }; return CallValue<bool>("CanStand", args, 1); }
        void Relocate(void* d, void* near) const { void* args[] = { d, near }; Call("Relocate", args, 2); }
        void Bleed(void* rel, int id, float men) const { void* args[] = { rel, &id, &men }; Call("Bleed", args, 3); }
    };
}
