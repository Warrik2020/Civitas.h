#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesCardLand : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesCardLand(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesCardLand") {}
    public:
        bool Refresh(void* internals, void* card, int senderId, int targetId, void* terms) const { void* args[] = { internals, card, &senderId, &targetId, terms }; return CallValue<bool>("Refresh", args, 5); }
        void* tiles() const { return ReadField<void*>("tiles"); }
    };
}
