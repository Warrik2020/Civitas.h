#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class AffairsCardPopup : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsCardPopup(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "AffairsCardPopup") {}
    public:
        void Reopen() const { CallStatic("Reopen", nullptr, 0); }
    };
}
