#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class Affairs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Affairs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "Affairs") {}
    public:
        void Bind(void* core, void* world) const { void* args[] = { core, world }; CallStatic("Bind", args, 2); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void* Thread(int id) const { void* args[] = { &id }; return CallStatic("Thread", args, 1); }
        void* Figure(int id) const { void* args[] = { &id }; return CallStatic("Figure", args, 1); }
        int ThreadsOf(int nation, bool open, void* dst) const { void* args[] = { &nation, &open, dst }; return CallStaticValue<int>("ThreadsOf", args, 3); }
        bool TryModifiers(int nation, void* mods) const { void* args[] = { &nation, &mods }; return CallStaticValue<bool>("TryModifiers", args, 2); }
        void* FirstPlayerChoice() const { return CallStatic("FirstPlayerChoice", nullptr, 0); }
        int PlayerChoiceCount() const { return CallStaticValue<int>("PlayerChoiceCount", nullptr, 0); }
        bool Answer(int choiceId, int option, const char*& why) const { void* args[] = { &choiceId, &option, &why }; return CallStaticValue<bool>("Answer", args, 3); }
        void* ContextFor(void* t) const { void* args[] = { t }; return CallStatic("ContextFor", args, 1); }
        bool StartStory(int nation, const char* storyId, const char*& why) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* args[] = { &nation, managed_1, &why }; return CallStaticValue<bool>("StartStory", args, 3); }
        int MarksOf(int nation, void* dst) const { void* args[] = { &nation, dst }; return CallStaticValue<int>("MarksOf", args, 2); }
    };
}
