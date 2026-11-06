#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class Persuasion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Persuasion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "Persuasion") {}
    public:
        bool OffCooldown(int a, int b, int today) const { void* args[] = { &a, &b, &today }; return CallStaticValue<bool>("OffCooldown", args, 3); }
        void MarkCredited(int a, int b, int today) const { void* args[] = { &a, &b, &today }; CallStatic("MarkCredited", args, 3); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        float Credit(void* rel, int themId, float spentThisConversation, float amount, float goodwillMax) const { void* args[] = { rel, &themId, &spentThisConversation, &amount, &goodwillMax }; return CallStaticValue<float>("Credit", args, 5); }
        float PerConversation() const { return ReadStaticField<float>("PerConversation"); }
        float PerExchange() const { return ReadStaticField<float>("PerExchange"); }
        int CooldownDays() const { return ReadStaticField<int>("CooldownDays"); }
    };
}
