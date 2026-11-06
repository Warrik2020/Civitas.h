#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class GameSetupController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GameSetupController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "GameSetupController") {}
    public:
        void Reprompt(void* candidateIds, const char* prompt, void* onPicked) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(prompt ? prompt : "") : nullptr; void* __callArgs[] = { candidateIds, managed_1, onPicked }; Call("Reprompt", __callArgs, 3); }
        bool PromptForPlayerNation() const { return CallValue<bool>("PromptForPlayerNation", nullptr, 0); }
    };
}
