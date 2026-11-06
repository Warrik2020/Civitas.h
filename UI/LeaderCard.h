#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class LeaderCard : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderCard(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "LeaderCard") {}
    public:
        void Append(void* sb, void* it, int tick, void* cfg, int toWorld = 0) const { void* args[] = { sb, it, &tick, cfg, &toWorld }; CallStatic("Append", args, 5); }
        void AppendDetail(void* sb, void* it, int tick, void* cfg, int toWorld = 0) const { void* args[] = { sb, it, &tick, cfg, &toWorld }; CallStatic("AppendDetail", args, 5); }
        void AppendTemper(void* sb, void* it, bool habits = true) const { void* args[] = { sb, it, &habits }; CallStatic("AppendTemper", args, 3); }
        void AppendBrief(void* sb, void* it, int tick, void* cfg) const { void* args[] = { sb, it, &tick, cfg }; CallStatic("AppendBrief", args, 4); }
    };
}
