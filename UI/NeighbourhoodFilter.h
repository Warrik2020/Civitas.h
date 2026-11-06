#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class NeighbourhoodFilter : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NeighbourhoodFilter(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "NeighbourhoodFilter") {}
    public:
        bool NextDoor(void* a, int player, void* isNear, void* flared) const { void* args[] = { a, &player, isNear, flared }; return CallStaticValue<bool>("NextDoor", args, 4); }
        bool Mine(void* a, int player) const { void* args[] = { a, &player }; return CallStaticValue<bool>("Mine", args, 2); }
        int Rank(void* a, int player) const { void* args[] = { a, &player }; return CallStaticValue<int>("Rank", args, 2); }
        void Sort(void* arcs, int player) const { void* args[] = { arcs, &player }; CallStatic("Sort", args, 2); }
        bool NearNews(int nationA, int nationB, bool playerInvolved, int player, void* isNear) const { void* args[] = { &nationA, &nationB, &playerInvolved, &player, isNear }; return CallStaticValue<bool>("NearNews", args, 5); }
    };
}
