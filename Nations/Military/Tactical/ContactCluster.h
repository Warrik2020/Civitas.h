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
        bool InWarContact(void* military, void* d, void* cfg, int tick) const { void* __callArgs[] = { military, d, cfg, &tick }; return CallStaticValue<bool>("InWarContact", __callArgs, 4); }
        bool Collect(void* military, void* nations, int playerNationId, void* seedIds, void* cfg, int tick, void* result, void* arena, const char*& refusal) const { void* __callArgs[] = { military, nations, &playerNationId, seedIds, cfg, &tick, result, &arena, &refusal }; return CallStaticValue<bool>("Collect", __callArgs, 9); }
        int SideOf(void* player, int nationId) const { void* __callArgs[] = { player, &nationId }; return CallStaticValue<int>("SideOf", __callArgs, 2); }
        void* ArenaOf(void* members, void* grid) const { void* __callArgs[] = { members, grid }; return CallStatic("ArenaOf", __callArgs, 2); }
    };
}
