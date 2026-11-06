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
        void* FigureById(int id) const { void* args[] = { &id }; return Call("FigureById", args, 1); }
        int BindFigure(void* c, void* d, bool reuse, bool create) const { void* args[] = { c, d, &reuse, &create }; return CallValue<int>("BindFigure", args, 4); }
        int BindExile(void* c, void* d) const { void* args[] = { c, d }; return CallValue<int>("BindExile", args, 2); }
        void* FindFigure(int nation, const char* role, void* traits, int traitStart, bool includeBusy, int except) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* args[] = { &nation, managed_1, traits, &traitStart, &includeBusy, &except }; return Call("FindFigure", args, 6); }
        int CountFigures(int nation, const char* role) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(role ? role : "") : nullptr; void* args[] = { &nation, managed_1 }; return CallValue<int>("CountFigures", args, 2); }
        void SetStatus(void* f, int status, int tick) const { void* args[] = { f, &status, &tick }; Call("SetStatus", args, 3); }
        void AddMark(void* c, const char* kind, const char* subjectRole, float strength) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(subjectRole ? subjectRole : "") : nullptr; void* args[] = { c, managed_1, managed_2, &strength }; Call("AddMark", args, 4); }
        bool RemoveMark(void* c, const char* kind, const char* subjectRole) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(subjectRole ? subjectRole : "") : nullptr; void* args[] = { c, managed_1, managed_2 }; return CallValue<bool>("RemoveMark", args, 3); }
        float MarkStrength(void* w, int nation, const char* kind, void* subject) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* args[] = { w, &nation, managed_2, subject }; return CallValue<float>("MarkStrength", args, 4); }
        float MarkStrengthNow(void* m, float ticksPerYear, int now) const { void* args[] = { m, &ticksPerYear, &now }; return CallValue<float>("MarkStrengthNow", args, 3); }
        void* MarkMemory(void* w, int nation, const char* kind) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* args[] = { w, &nation, managed_2 }; return Call("MarkMemory", args, 3); }
        int MarkYear(void* w, int nation, const char* kind) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(kind ? kind : "") : nullptr; void* args[] = { w, &nation, managed_2 }; return CallValue<int>("MarkYear", args, 3); }
        int MarksOf(int nation, void* dst) const { void* args[] = { &nation, dst }; return CallValue<int>("MarksOf", args, 2); }
        bool TryModifiers(int nation, float ticksPerYear, int now, void* mods) const { void* args[] = { &nation, &ticksPerYear, &now, &mods }; return CallValue<bool>("TryModifiers", args, 4); }
        void* TableOf(void* def) const { void* args[] = { def }; return CallStatic("TableOf", args, 1); }
        int64_t ShareKey(int state, int origin) const { void* args[] = { &state, &origin }; return CallStaticValue<int64_t>("ShareKey", args, 2); }
        bool ShareThen(void* w, int nation, int state, int origin, void* then) const { void* args[] = { w, &nation, &state, &origin, &then }; return CallValue<bool>("ShareThen", args, 5); }
        bool LoyaltyThen(void* w, int nation, int state, void* then) const { void* args[] = { w, &nation, &state, &then }; return CallValue<bool>("LoyaltyThen", args, 4); }
        bool RealmThen(void* w, int nation, void* then) const { void* args[] = { w, &nation, &then }; return CallValue<bool>("RealmThen", args, 3); }
        bool HistoryOf(int nation, void* dst) const { void* args[] = { &nation, dst }; return CallValue<bool>("HistoryOf", args, 2); }
        void RestoreHistory(int nation, int born, void* src) const { void* args[] = { &nation, &born, src }; Call("RestoreHistory", args, 3); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void RestoreThread(void* t) const { void* args[] = { t }; Call("RestoreThread", args, 1); }
        void RestoreFigure(void* f) const { void* args[] = { f }; Call("RestoreFigure", args, 1); }
        void RestoreMark(void* m) const { void* args[] = { m }; Call("RestoreMark", args, 1); }
        void RestoreChoice(void* c) const { void* args[] = { c }; Call("RestoreChoice", args, 1); }
        void RestoreBook(int nation, void* st) const { void* args[] = { &nation, &st }; Call("RestoreBook", args, 2); }
        void RestoreCounters(int nextThread, int nextFigure, int nextMark, int nextChoice) const { void* args[] = { &nextThread, &nextFigure, &nextMark, &nextChoice }; Call("RestoreCounters", args, 4); }
        int DropLost(void* w) const { void* args[] = { w }; return CallValue<int>("DropLost", args, 1); }
        void SetLibrary(void* library) const { void* args[] = { library }; Call("SetLibrary", args, 1); }
        void* Thread(int id) const { void* args[] = { &id }; return Call("Thread", args, 1); }
        float Roll(int seed, int a, int b, int c, int d) const { void* args[] = { &seed, &a, &b, &c, &d }; return CallValue<float>("Roll", args, 5); }
        uint32_t HashString(const char* s) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<uint32_t>("HashString", args, 1); }
        void Review(void* w, int nation) const { void* args[] = { w, &nation }; Call("Review", args, 2); }
        void TickPlayer(void* w) const { void* args[] = { w }; Call("TickPlayer", args, 1); }
        bool Spawn(void* c, int nation, const char* storyId) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* args[] = { c, &nation, managed_2 }; return CallValue<bool>("Spawn", args, 3); }
        bool StartStory(void* w, int nation, const char* storyId, const char*& why) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* args[] = { w, &nation, managed_2, &why }; return CallValue<bool>("StartStory", args, 4); }
        bool HardAllowed(void* w, int nation) const { void* args[] = { w, &nation }; return CallValue<bool>("HardAllowed", args, 2); }
        bool HasChoice(int threadId) const { void* args[] = { &threadId }; return CallValue<bool>("HasChoice", args, 1); }
        void* ChoiceFor(int threadId) const { void* args[] = { &threadId }; return Call("ChoiceFor", args, 1); }
        void* Choice(int id) const { void* args[] = { &id }; return Call("Choice", args, 1); }
        bool Answer(void* w, int choiceId, int option, const char*& why) const { void* args[] = { w, &choiceId, &option, &why }; return CallValue<bool>("Answer", args, 4); }
        bool Visible(void* c, void* o) const { void* args[] = { c, o }; return CallValue<bool>("Visible", args, 2); }
        bool Affordable(void* c, void* o, const char*& why) const { void* args[] = { c, o, &why }; return CallValue<bool>("Affordable", args, 3); }
        float CostAmount(void* c, void* k) const { void* args[] = { c, k }; return CallValue<float>("CostAmount", args, 2); }
        bool Eval(void* c, void* cond) const { void* args[] = { c, cond }; return CallValue<bool>("Eval", args, 2); }
        void Incident(int nation, int kind, int other, int tick) const { void* args[] = { &nation, &kind, &other, &tick }; Call("Incident", args, 4); }
        void Incident(int nation, int born, int kind, int other, int tick) const { void* args[] = { &nation, &born, &kind, &other, &tick }; Call("Incident", args, 5); }
        bool RecentOf(int nation, int kind, int& other, int& tick) const { void* args[] = { &nation, &kind, &other, &tick }; return CallValue<bool>("RecentOf", args, 4); }
        bool Recent(int nation, int kind) const { void* args[] = { &nation, &kind }; return CallValue<bool>("Recent", args, 2); }
        int OpenCount(int nation) const { void* args[] = { &nation }; return CallValue<int>("OpenCount", args, 1); }
        bool Running(int nation, const char* storyId, void* except) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* args[] = { &nation, managed_1, except }; return CallValue<bool>("Running", args, 3); }
        bool Ran(int nation, const char* storyId) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* args[] = { &nation, managed_1 }; return CallValue<bool>("Ran", args, 2); }
        bool EndedWith(int nation, const char* storyId, const char* outcome) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(storyId ? storyId : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(outcome ? outcome : "") : nullptr; void* args[] = { &nation, managed_1, managed_2 }; return CallValue<bool>("EndedWith", args, 3); }
        int ThreadsOf(int nation, bool open, void* dst) const { void* args[] = { &nation, &open, dst }; return CallValue<int>("ThreadsOf", args, 3); }
        bool BookOf(int nation, void* dst) const { void* args[] = { &nation, &dst }; return CallValue<bool>("BookOf", args, 2); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* Scratch() const { return ReadField<void*>("Scratch"); }
        bool Restoring() const { return ReadField<bool>("Restoring"); }
        void SetRestoring(bool value) const { WriteField<bool>("Restoring", value); }
        int OriginTick() const { return ReadField<int>("OriginTick"); }
        void SetOriginTick(int value) const { WriteField<int>("OriginTick", value); }
        void* Stats() const { return ReadField<void*>("Stats"); }
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
        float happiness() const { return ReadField<float>("happiness"); }
        void SetHappiness(float value) const { WriteField<float>("happiness", value); }
        float treasury() const { return ReadField<float>("treasury"); }
        void SetTreasury(float value) const { WriteField<float>("treasury", value); }
        float population() const { return ReadField<float>("population"); }
        void SetPopulation(float value) const { WriteField<float>("population", value); }
        float tiles() const { return ReadField<float>("tiles"); }
        void SetTiles(float value) const { WriteField<float>("tiles", value); }
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
        float value() const { return ReadField<float>("value"); }
        void SetValue(float value) const { WriteField<float>("value", value); }
        void* realm() const { return ReadField<void*>("realm"); }
        int born() const { return ReadField<int>("born"); }
        void SetBorn(int value) const { WriteField<int>("born", value); }
        int lastHardTick() const { return ReadField<int>("lastHardTick"); }
        void SetLastHardTick(int value) const { WriteField<int>("lastHardTick", value); }
        int lastUpkeepYear() const { return ReadField<int>("lastUpkeepYear"); }
        void SetLastUpkeepYear(int value) const { WriteField<int>("lastUpkeepYear", value); }
        void* recent() const { return ReadField<void*>("recent"); }
        void* realm() const { return ReadField<void*>("realm"); }
        void* shareKeys() const { return ReadField<void*>("shareKeys"); }
        void* shareValues() const { return ReadField<void*>("shareValues"); }
        void* loyaltyStates() const { return ReadField<void*>("loyaltyStates"); }
        void* loyaltyValues() const { return ReadField<void*>("loyaltyValues"); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        int other() const { return ReadField<int>("other"); }
        void SetOther(int value) const { WriteField<int>("other", value); }
        int born() const { return ReadField<int>("born"); }
        void SetBorn(int value) const { WriteField<int>("born", value); }
        int lastHardTick() const { return ReadField<int>("lastHardTick"); }
        void SetLastHardTick(int value) const { WriteField<int>("lastHardTick", value); }
        int lastUpkeepYear() const { return ReadField<int>("lastUpkeepYear"); }
        void SetLastUpkeepYear(int value) const { WriteField<int>("lastUpkeepYear", value); }
        void* recentKind() const { return ReadField<void*>("recentKind"); }
        void SetRecentKind(void* value) const { WriteField<void*>("recentKind", value); }
        void* recentTick() const { return ReadField<void*>("recentTick"); }
        void SetRecentTick(void* value) const { WriteField<void*>("recentTick", value); }
        void* recentOther() const { return ReadField<void*>("recentOther"); }
        void SetRecentOther(void* value) const { WriteField<void*>("recentOther", value); }
    };
}
