#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class ContactCluster : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ContactCluster(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "ContactCluster") {}
    public:
        bool InWarContact(void* military, void* d, void* cfg, int tick) const { void* args[] = { military, d, cfg, &tick }; return CallStaticValue<bool>("InWarContact", args, 4); }
        bool Collect(void* military, void* nations, int playerNationId, void* seedIds, void* cfg, int tick, void* result, void* arena, const char*& refusal) const { void* args[] = { military, nations, &playerNationId, seedIds, cfg, &tick, result, &arena, &refusal }; return CallStaticValue<bool>("Collect", args, 9); }
        int SideOf(void* player, int nationId) const { void* args[] = { player, &nationId }; return CallStaticValue<int>("SideOf", args, 2); }
        void* ArenaOf(void* members, void* grid) const { void* args[] = { members, grid }; return CallStatic("ArenaOf", args, 2); }
        void* division() const { return ReadField<void*>("division"); }
        void SetDivision(void* value) const { WriteField<void*>("division", value); }
        int side() const { return ReadField<int>("side"); }
        void SetSide(int value) const { WriteField<int>("side", value); }
        bool reserve() const { return ReadField<bool>("reserve"); }
        void SetReserve(bool value) const { WriteField<bool>("reserve", value); }
    };
}
