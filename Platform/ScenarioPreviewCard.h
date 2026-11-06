#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Platform
{
    class ScenarioPreviewCard : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioPreviewCard(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Platform", "ScenarioPreviewCard") {}
    public:
        void* Capture(void* card, const char* pathWithoutExtension, void* result) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(pathWithoutExtension ? pathWithoutExtension : "") : nullptr; void* __callArgs[] = { card, managed_1, result }; return CallStatic("Capture", __callArgs, 3); }
        int Width() const { return ReadStaticField<int>("Width"); }
        int Height() const { return ReadStaticField<int>("Height"); }
    };
}
