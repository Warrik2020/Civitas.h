#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsCore : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsCore(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsCore") {}
    public:
        void* FigureById(int id) const { void* __callArgs[] = { &id }; return Call("FigureById", __callArgs, 1); }
        int BindFigure(void* c, void* d, bool reuse, bool create) const { void* __callArgs[] = { c, d, &reuse, &create }; return CallValue<int>("BindFigure", __callArgs, 4); }
        int BindExile(void* c, void* d) const { void* __callArgs[] = { c, d }; return CallValue<int>("BindExile", __callArgs, 2); }
        void* FindFigure(int nation, const char* role, void* traits, int traitStart, bool includeBusy, int except) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* __callArgs[] = { &nation, managed_1, traits, &traitStart, &includeBusy, &except }; return Call("FindFigure", __callArgs, 6); }
        int CountFigures(int nation, const char* role) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* __callArgs[] = { &nation, managed_1 }; return CallValue<int>("CountFigures", __callArgs, 2); }
        void SetStatus(void* f, int status, int tick) const { void* __callArgs[] = { f, &status, &tick }; Call("SetStatus", __callArgs, 3); }
        void AddMark(void* c, const char* kind, const char* subjectRole, float strength) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(subjectRole ? subjectRole : "") : nullptr; void* __callArgs[] = { c, managed_1, managed_2, &strength }; Call("AddMark", __callArgs, 4); }
        bool RemoveMark(void* c, const char* kind, const char* subjectRole) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(subjectRole ? subjectRole : "") : nullptr; void* __callArgs[] = { c, managed_1, managed_2 }; return CallValue<bool>("RemoveMark", __callArgs, 3); }
        float MarkStrength(void* w, int nation, const char* kind, void* subject) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* __callArgs[] = { w, &nation, managed_2, subject }; return CallValue<float>("MarkStrength", __callArgs, 4); }
        float MarkStrengthNow(void* m, float ticksPerYear, int now) const { void* __callArgs[] = { m, &ticksPerYear, &now }; return CallValue<float>("MarkStrengthNow", __callArgs, 3); }
        void* MarkMemory(void* w, int nation, const char* kind) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* __callArgs[] = { w, &nation, managed_2 }; return Call("MarkMemory", __callArgs, 3); }
        int MarkYear(void* w, int nation, const char* kind) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* __callArgs[] = { w, &nation, managed_2 }; return CallValue<int>("MarkYear", __callArgs, 3); }
        int MarksOf(int nation, void* dst) const { void* __callArgs[] = { &nation, dst }; return CallValue<int>("MarksOf", __callArgs, 2); }
        bool TryModifiers(int nation, float ticksPerYear, int now, void* mods) const { void* __callArgs[] = { &nation, &ticksPerYear, &now, &mods }; return CallValue<bool>("TryModifiers", __callArgs, 4); }
        void* TableOf(void* def) const { void* __callArgs[] = { def }; return CallStatic("TableOf", __callArgs, 1); }
        int64_t ShareKey(int state, int origin) const { void* __callArgs[] = { &state, &origin }; return CallStaticValue<int64_t>("ShareKey", __callArgs, 2); }
        bool ShareThen(void* w, int nation, int state, int origin, void* then) const { void* __callArgs[] = { w, &nation, &state, &origin, &then }; return CallValue<bool>("ShareThen", __callArgs, 5); }
        bool LoyaltyThen(void* w, int nation, int state, void* then) const { void* __callArgs[] = { w, &nation, &state, &then }; return CallValue<bool>("LoyaltyThen", __callArgs, 4); }
        bool RealmThen(void* w, int nation, void* then) const { void* __callArgs[] = { w, &nation, &then }; return CallValue<bool>("RealmThen", __callArgs, 3); }
        bool HistoryOf(int nation, void* dst) const { void* __callArgs[] = { &nation, dst }; return CallValue<bool>("HistoryOf", __callArgs, 2); }
        void RestoreHistory(int nation, int born, void* src) const { void* __callArgs[] = { &nation, &born, src }; Call("RestoreHistory", __callArgs, 3); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void RestoreThread(void* t) const { void* __callArgs[] = { t }; Call("RestoreThread", __callArgs, 1); }
        void RestoreFigure(void* f) const { void* __callArgs[] = { f }; Call("RestoreFigure", __callArgs, 1); }
        void RestoreMark(void* m) const { void* __callArgs[] = { m }; Call("RestoreMark", __callArgs, 1); }
        void RestoreChoice(void* c) const { void* __callArgs[] = { c }; Call("RestoreChoice", __callArgs, 1); }
        void RestoreBook(int nation, void* st) const { void* __callArgs[] = { &nation, &st }; Call("RestoreBook", __callArgs, 2); }
        void RestoreCounters(int nextThread, int nextFigure, int nextMark, int nextChoice) const { void* __callArgs[] = { &nextThread, &nextFigure, &nextMark, &nextChoice }; Call("RestoreCounters", __callArgs, 4); }
        int DropLost(void* w) const { void* __callArgs[] = { w }; return CallValue<int>("DropLost", __callArgs, 1); }
        void SetLibrary(void* library) const { void* __callArgs[] = { library }; Call("SetLibrary", __callArgs, 1); }
        void* Thread(int id) const { void* __callArgs[] = { &id }; return Call("Thread", __callArgs, 1); }
        float Roll(int seed, int a, int b, int c, int d) const { void* __callArgs[] = { &seed, &a, &b, &c, &d }; return CallValue<float>("Roll", __callArgs, 5); }
        uint32_t HashString(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<uint32_t>("HashString", __callArgs, 1); }
        void Review(void* w, int nation) const { void* __callArgs[] = { w, &nation }; Call("Review", __callArgs, 2); }
        void TickPlayer(void* w) const { void* __callArgs[] = { w }; Call("TickPlayer", __callArgs, 1); }
        bool Spawn(void* c, int nation, const char* storyId) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* __callArgs[] = { c, &nation, managed_2 }; return CallValue<bool>("Spawn", __callArgs, 3); }
        bool StartStory(void* w, int nation, const char* storyId, const char*& why) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* __callArgs[] = { w, &nation, managed_2, &why }; return CallValue<bool>("StartStory", __callArgs, 4); }
        bool HardAllowed(void* w, int nation) const { void* __callArgs[] = { w, &nation }; return CallValue<bool>("HardAllowed", __callArgs, 2); }
        bool HasChoice(int threadId) const { void* __callArgs[] = { &threadId }; return CallValue<bool>("HasChoice", __callArgs, 1); }
        void* ChoiceFor(int threadId) const { void* __callArgs[] = { &threadId }; return Call("ChoiceFor", __callArgs, 1); }
        void* Choice(int id) const { void* __callArgs[] = { &id }; return Call("Choice", __callArgs, 1); }
        bool Answer(void* w, int choiceId, int option, const char*& why) const { void* __callArgs[] = { w, &choiceId, &option, &why }; return CallValue<bool>("Answer", __callArgs, 4); }
        bool Visible(void* c, void* o) const { void* __callArgs[] = { c, o }; return CallValue<bool>("Visible", __callArgs, 2); }
        bool Affordable(void* c, void* o, const char*& why) const { void* __callArgs[] = { c, o, &why }; return CallValue<bool>("Affordable", __callArgs, 3); }
        float CostAmount(void* c, void* k) const { void* __callArgs[] = { c, k }; return CallValue<float>("CostAmount", __callArgs, 2); }
        bool Eval(void* c, void* cond) const { void* __callArgs[] = { c, cond }; return CallValue<bool>("Eval", __callArgs, 2); }
        void Incident(int nation, int kind, int other, int tick) const { void* __callArgs[] = { &nation, &kind, &other, &tick }; Call("Incident", __callArgs, 4); }
        void Incident(int nation, int born, int kind, int other, int tick) const { void* __callArgs[] = { &nation, &born, &kind, &other, &tick }; Call("Incident", __callArgs, 5); }
        bool RecentOf(int nation, int kind, int& other, int& tick) const { void* __callArgs[] = { &nation, &kind, &other, &tick }; return CallValue<bool>("RecentOf", __callArgs, 4); }
        bool Recent(int nation, int kind) const { void* __callArgs[] = { &nation, &kind }; return CallValue<bool>("Recent", __callArgs, 2); }
        int OpenCount(int nation) const { void* __callArgs[] = { &nation }; return CallValue<int>("OpenCount", __callArgs, 1); }
        bool Running(int nation, const char* storyId, void* except) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* __callArgs[] = { &nation, managed_1, except }; return CallValue<bool>("Running", __callArgs, 3); }
        bool Ran(int nation, const char* storyId) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* __callArgs[] = { &nation, managed_1 }; return CallValue<bool>("Ran", __callArgs, 2); }
        bool EndedWith(int nation, const char* storyId, const char* outcome) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(outcome ? outcome : "") : nullptr; void* __callArgs[] = { &nation, managed_1, managed_2 }; return CallValue<bool>("EndedWith", __callArgs, 3); }
        int ThreadsOf(int nation, bool open, void* dst) const { void* __callArgs[] = { &nation, &open, dst }; return CallValue<int>("ThreadsOf", __callArgs, 3); }
        bool BookOf(int nation, void* dst) const { void* __callArgs[] = { &nation, &dst }; return CallValue<bool>("BookOf", __callArgs, 2); }
        void* Scratch() const { return ReadField<void*>("Scratch"); }
        bool Restoring() const { return ReadField<bool>("Restoring"); }
        void Restoring(bool value) const { WriteField<bool>("Restoring", value); }
        int OriginTick() const { return ReadField<int>("OriginTick"); }
        void OriginTick(int value) const { WriteField<int>("OriginTick", value); }
        void* Stats() const { return ReadField<void*>("Stats"); }
    };
}
