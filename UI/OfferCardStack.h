#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class OfferCardStack : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit OfferCardStack(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "OfferCardStack") {}
    public:
        void Present(void* item) const { void* __callArgs[] = { item }; Call("Present", __callArgs, 1); }
        float BaseOffset() const { return ReadStaticField<float>("BaseOffset"); }
    };
}
