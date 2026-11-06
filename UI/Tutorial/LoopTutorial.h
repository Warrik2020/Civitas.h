#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Tutorial
{
    class LoopTutorial : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LoopTutorial(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Tutorial", "LoopTutorial") {}
    public:
        void Offer() const { CallStatic("Offer", nullptr, 0); }
        void* Cards() const { return CallStatic("Cards", nullptr, 0); }
        void* ObsoleteCard() const { return CallStatic("ObsoleteCard", nullptr, 0); }
        void* QuotaCard(const char* resource) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(resource ? resource : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("QuotaCard", __callArgs, 1); }
        void* DeficitCard() const { return CallStatic("DeficitCard", nullptr, 0); }
        void* NoKitCard() const { return CallStatic("NoKitCard", nullptr, 0); }
        void* AmbitionCard() const { return CallStatic("AmbitionCard", nullptr, 0); }
        void* Key() const { return ReadStaticField<void*>("Key"); }
    };
}
