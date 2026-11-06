#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlmChat : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlmChat(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlmChat") {}
    public:
        void* Build(const char* system, void* history, const char* playerLine) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(system ? system : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(playerLine ? playerLine : "") : nullptr; void* args[] = { managed_0, history, managed_2 }; return CallStatic("Build", args, 3); }
        void* Clean(const char* raw, int maxChars = 700) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(raw ? raw : "") : nullptr; void* args[] = { managed_0, &maxChars }; return CallStatic("Clean", args, 2); }
        void* Sanitize(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Sanitize", args, 1); }
        void* Stop() const { return ReadStaticField<void*>("Stop"); }
        bool fromPlayer() const { return ReadField<bool>("fromPlayer"); }
        void SetFromPlayer(bool value) const { WriteField<bool>("fromPlayer", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
    };
}
