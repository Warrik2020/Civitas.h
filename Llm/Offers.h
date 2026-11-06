#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class Offers : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Offers(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "Offers") {}
    public:
        void* Legal(int themId, int playerId, void* nations, void* internals, void* military) const { void* args[] = { &themId, &playerId, nations, internals, military }; return CallStatic("Legal", args, 5); }
        void* OnTheTable(void* legal, bool atWar) const { void* args[] = { legal, &atWar }; return CallStatic("OnTheTable", args, 2); }
        void* Grammar(void* legal) const { void* args[] = { legal }; return CallStatic("Grammar", args, 1); }
        void* Token(int v) const { void* args[] = { &v }; return CallStatic("Token", args, 1); }
        void* ParamGrammar(int v) const { void* args[] = { &v }; return CallStatic("ParamGrammar", args, 1); }
        void* ParamUser(int v, const char* playerMessage) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(playerMessage ? playerMessage : "") : nullptr; void* args[] = { &v, managed_1 }; return CallStatic("ParamUser", args, 2); }
        void ApplyParams(void* o, const char* json) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(json ? json : "") : nullptr; void* args[] = { &o, managed_1 }; CallStatic("ApplyParams", args, 2); }
        bool SelfEvident(int v) const { void* args[] = { &v }; return CallStaticValue<bool>("SelfEvident", args, 1); }
        void* DetectGrammar(void* legal) const { void* args[] = { legal }; return CallStatic("DetectGrammar", args, 1); }
        void* DetectUser(const char* playerMessage, void* legal) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(playerMessage ? playerMessage : "") : nullptr; void* args[] = { managed_0, legal }; return CallStatic("DetectUser", args, 2); }
        void* DecideUser(const char* situation, const char* playerMessage, int asked, void* nations, int playerId) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(situation ? situation : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(playerMessage ? playerMessage : "") : nullptr; void* args[] = { managed_0, managed_1, &asked, nations, &playerId }; return CallStatic("DecideUser", args, 5); }
        void* DecisionInstruction(int decided, void* nations, int playerId) const { void* args[] = { &decided, nations, &playerId }; return CallStatic("DecisionInstruction", args, 3); }
        void* ClassifierUser(const char* lastMessage, void* legal) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(lastMessage ? lastMessage : "") : nullptr; void* args[] = { managed_0, legal }; return CallStatic("ClassifierUser", args, 2); }
        void* Parse(const char* json, void* legal, int themId, int playerId) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(json ? json : "") : nullptr; void* args[] = { managed_0, legal, &themId, &playerId }; return CallStatic("Parse", args, 4); }
        int ParseAsked(const char* json, void* legal) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(json ? json : "") : nullptr; void* args[] = { managed_0, legal }; return CallStaticValue<int>("ParseAsked", args, 2); }
        void* Describe(void* o, void* nations) const { void* args[] = { o, nations }; return CallStatic("Describe", args, 2); }
        bool StillValid(void* o, void* internals) const { void* args[] = { o, internals }; return CallStaticValue<bool>("StillValid", args, 2); }
        bool Execute(void* o, void* nations, void* internals, const char*& message) const { void* args[] = { o, nations, internals, &message }; return CallStaticValue<bool>("Execute", args, 4); }
        void* ClassifierSystem() const { return ReadStaticField<void*>("ClassifierSystem"); }
        void* DetectSystem() const { return ReadStaticField<void*>("DetectSystem"); }
        void* ParamSystem() const { return ReadStaticField<void*>("ParamSystem"); }
        void* DecideSystem() const { return ReadStaticField<void*>("DecideSystem"); }
        void* DecideGrammar() const { return ReadStaticField<void*>("DecideGrammar"); }
    };
}
