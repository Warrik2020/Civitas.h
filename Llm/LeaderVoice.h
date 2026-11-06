#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LeaderVoice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderVoice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LeaderVoice") {}
    public:
        void* BuildSystem(int themId, int playerId, void* nations, void* internals, void* military) const { void* args[] = { &themId, &playerId, nations, internals, military }; return CallStatic("BuildSystem", args, 5); }
        void* BuildSituation(int themId, int playerId, void* nations, void* internals, void* military) const { void* args[] = { &themId, &playerId, nations, internals, military }; return CallStatic("BuildSituation", args, 5); }
        void* Greeting(int themId, int playerId, void* nations, void* internals) const { void* args[] = { &themId, &playerId, nations, internals }; return CallStatic("Greeting", args, 4); }
        int ReplyTokens() const { return ReadStaticField<int>("ReplyTokens"); }
    };
}
