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
        void Bind(void* core, void* world) const { void* __callArgs[] = { core, world }; CallStatic("Bind", __callArgs, 2); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void* Thread(int id) const { void* __callArgs[] = { &id }; return CallStatic("Thread", __callArgs, 1); }
        void* Figure(int id) const { void* __callArgs[] = { &id }; return CallStatic("Figure", __callArgs, 1); }
        int ThreadsOf(int nation, bool open, void* dst) const { void* __callArgs[] = { &nation, &open, dst }; return CallStaticValue<int>("ThreadsOf", __callArgs, 3); }
        bool TryModifiers(int nation, void* mods) const { void* __callArgs[] = { &nation, &mods }; return CallStaticValue<bool>("TryModifiers", __callArgs, 2); }
        void* FirstPlayerChoice() const { return CallStatic("FirstPlayerChoice", nullptr, 0); }
        int PlayerChoiceCount() const { return CallStaticValue<int>("PlayerChoiceCount", nullptr, 0); }
        bool Answer(int choiceId, int option, const char*& why) const { void* __callArgs[] = { &choiceId, &option, &why }; return CallStaticValue<bool>("Answer", __callArgs, 3); }
        void* ContextFor(void* t) const { void* __callArgs[] = { t }; return CallStatic("ContextFor", __callArgs, 1); }
        bool StartStory(int nation, const char* storyId, const char*& why) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* __callArgs[] = { &nation, managed_1, &why }; return CallStaticValue<bool>("StartStory", __callArgs, 3); }
        int MarksOf(int nation, void* dst) const { void* __callArgs[] = { &nation, dst }; return CallStaticValue<int>("MarksOf", __callArgs, 2); }
    };
}
