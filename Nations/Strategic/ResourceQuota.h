#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceQuota : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceQuota(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceQuota") {}
    public:
        void* Of(int nationId) const { void* args[] = { &nationId }; return CallStatic("Of", args, 1); }
        bool TryOf(int nationId, void* r) const { void* args[] = { &nationId, &r }; return CallStaticValue<bool>("TryOf", args, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void MarkRefreshed() const { CallStatic("MarkRefreshed", nullptr, 0); }
        float YieldShare(void* grid, int tile, void* polity, int& owner) const { void* args[] = { grid, &tile, polity, &owner }; return CallStaticValue<float>("YieldShare", args, 4); }
        void RefreshAll(void* grid, void* polity, void* internals, int now = -2147483648) const { void* args[] = { grid, polity, internals, &now }; CallStatic("RefreshAll", args, 4); }
        void Derive(void* r, void* it) const { void* args[] = { r, it }; CallStatic("Derive", args, 2); }
    };
}
