#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UnionOfferPopup : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionOfferPopup(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UnionOfferPopup") {}
    public:
        void ViewFront() const { CallStatic("ViewFront", nullptr, 0); }
    };
}
