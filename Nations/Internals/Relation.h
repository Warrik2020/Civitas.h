#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class Relation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Relation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "Relation") {}
    public:
        bool SkirmishLive(int violator) const { void* __callArgs[] = { &violator }; return CallValue<bool>("SkirmishLive", __callArgs, 1); }
        void ClearIncursionEpisodes() const { Call("ClearIncursionEpisodes", nullptr, 0); }
        int Other(int self) const { void* __callArgs[] = { &self }; return CallValue<int>("Other", __callArgs, 1); }
        float OpinionOf(int self) const { void* __callArgs[] = { &self }; return CallValue<float>("OpinionOf", __callArgs, 1); }
        float GoodwillOf(int self) const { void* __callArgs[] = { &self }; return CallValue<float>("GoodwillOf", __callArgs, 1); }
        void AddGoodwillToward(int actor, float amount, float max_) const { void* __callArgs[] = { &actor, &amount, &max_ }; Call("AddGoodwillToward", __callArgs, 3); }
        float GrudgeOf(int self) const { void* __callArgs[] = { &self }; return CallValue<float>("GrudgeOf", __callArgs, 1); }
        void AddGrudgeFor(int holder, float amount, float max_) const { void* __callArgs[] = { &holder, &amount, &max_ }; Call("AddGrudgeFor", __callArgs, 3); }
        float InfraFrictionOf(int self) const { void* __callArgs[] = { &self }; return CallValue<float>("InfraFrictionOf", __callArgs, 1); }
        void AddInfraFrictionFor(int holder, float amount, float max_) const { void* __callArgs[] = { &holder, &amount, &max_ }; Call("AddInfraFrictionFor", __callArgs, 3); }
        float WearinessOf(int self) const { void* __callArgs[] = { &self }; return CallValue<float>("WearinessOf", __callArgs, 1); }
        int TileSnapshotOf(int self) const { void* __callArgs[] = { &self }; return CallValue<int>("TileSnapshotOf", __callArgs, 1); }
        int LostCapitalOf(int self) const { void* __callArgs[] = { &self }; return CallValue<int>("LostCapitalOf", __callArgs, 1); }
        void SetLostCapital(int self, int tile) const { void* __callArgs[] = { &self, &tile }; Call("SetLostCapital", __callArgs, 2); }
        float CasualtiesOf(int self) const { void* __callArgs[] = { &self }; return CallValue<float>("CasualtiesOf", __callArgs, 1); }
        float WarScoreFor(int self) const { void* __callArgs[] = { &self }; return CallValue<float>("WarScoreFor", __callArgs, 1); }
        void AddWarScoreFor(int self, float amount, float clamp) const { void* __callArgs[] = { &self, &amount, &clamp }; Call("AddWarScoreFor", __callArgs, 3); }
        void AddCasualtiesFor(int self, float amount) const { void* __callArgs[] = { &self, &amount }; Call("AddCasualtiesFor", __callArgs, 2); }
        void Reset() const { Call("Reset", nullptr, 0); }
        int64_t Key(int idA, int idB) const { void* __callArgs[] = { &idA, &idB }; return CallStaticValue<int64_t>("Key", __callArgs, 2); }
        int a() const { return ReadField<int>("a"); }
        void a(int value) const { WriteField<int>("a", value); }
        int b() const { return ReadField<int>("b"); }
        void b(int value) const { WriteField<int>("b", value); }
        float opinionAB() const { return ReadField<float>("opinionAB"); }
        void opinionAB(float value) const { WriteField<float>("opinionAB", value); }
        float opinionBA() const { return ReadField<float>("opinionBA"); }
        void opinionBA(float value) const { WriteField<float>("opinionBA", value); }
        float goodwillAB() const { return ReadField<float>("goodwillAB"); }
        void goodwillAB(float value) const { WriteField<float>("goodwillAB", value); }
        float goodwillBA() const { return ReadField<float>("goodwillBA"); }
        void goodwillBA(float value) const { WriteField<float>("goodwillBA", value); }
        float grudgeAB() const { return ReadField<float>("grudgeAB"); }
        void grudgeAB(float value) const { WriteField<float>("grudgeAB", value); }
        float grudgeBA() const { return ReadField<float>("grudgeBA"); }
        void grudgeBA(float value) const { WriteField<float>("grudgeBA", value); }
        float infraFrictionAB() const { return ReadField<float>("infraFrictionAB"); }
        void infraFrictionAB(float value) const { WriteField<float>("infraFrictionAB", value); }
        float infraFrictionBA() const { return ReadField<float>("infraFrictionBA"); }
        void infraFrictionBA(float value) const { WriteField<float>("infraFrictionBA", value); }
        int borderContacts() const { return ReadField<int>("borderContacts"); }
        void borderContacts(int value) const { WriteField<int>("borderContacts", value); }
        int landBorder() const { return ReadField<int>("landBorder"); }
        void landBorder(int value) const { WriteField<int>("landBorder", value); }
        float seaGap() const { return ReadField<float>("seaGap"); }
        void seaGap(float value) const { WriteField<float>("seaGap", value); }
        bool overseasWar() const { return ReadField<bool>("overseasWar"); }
        void overseasWar(bool value) const { WriteField<bool>("overseasWar", value); }
        float recentPressure() const { return ReadField<float>("recentPressure"); }
        void recentPressure(float value) const { WriteField<float>("recentPressure", value); }
        bool atWar() const { return ReadField<bool>("atWar"); }
        void atWar(bool value) const { WriteField<bool>("atWar", value); }
        int warDeclaredTick() const { return ReadField<int>("warDeclaredTick"); }
        void warDeclaredTick(int value) const { WriteField<int>("warDeclaredTick", value); }
        int declarerId() const { return ReadField<int>("declarerId"); }
        void declarerId(int value) const { WriteField<int>("declarerId", value); }
        bool independenceWar() const { return ReadField<bool>("independenceWar"); }
        void independenceWar(bool value) const { WriteField<bool>("independenceWar", value); }
        int independenceRebelId() const { return ReadField<int>("independenceRebelId"); }
        void independenceRebelId(int value) const { WriteField<int>("independenceRebelId", value); }
        bool endlessWar() const { return ReadField<bool>("endlessWar"); }
        void endlessWar(bool value) const { WriteField<bool>("endlessWar", value); }
        float wearinessA() const { return ReadField<float>("wearinessA"); }
        void wearinessA(float value) const { WriteField<float>("wearinessA", value); }
        float wearinessB() const { return ReadField<float>("wearinessB"); }
        void wearinessB(float value) const { WriteField<float>("wearinessB", value); }
        float warScore() const { return ReadField<float>("warScore"); }
        void warScore(float value) const { WriteField<float>("warScore", value); }
        int truceUntilTick() const { return ReadField<int>("truceUntilTick"); }
        void truceUntilTick(int value) const { WriteField<int>("truceUntilTick", value); }
        int tileSnapshotA() const { return ReadField<int>("tileSnapshotA"); }
        void tileSnapshotA(int value) const { WriteField<int>("tileSnapshotA", value); }
        int tileSnapshotB() const { return ReadField<int>("tileSnapshotB"); }
        void tileSnapshotB(int value) const { WriteField<int>("tileSnapshotB", value); }
        int lostCapitalA() const { return ReadField<int>("lostCapitalA"); }
        void lostCapitalA(int value) const { WriteField<int>("lostCapitalA", value); }
        int lostCapitalB() const { return ReadField<int>("lostCapitalB"); }
        void lostCapitalB(int value) const { WriteField<int>("lostCapitalB", value); }
        bool conquestLedgerClosed() const { return ReadField<bool>("conquestLedgerClosed"); }
        void conquestLedgerClosed(bool value) const { WriteField<bool>("conquestLedgerClosed", value); }
        int suesForPeaceTick() const { return ReadField<int>("suesForPeaceTick"); }
        void suesForPeaceTick(int value) const { WriteField<int>("suesForPeaceTick", value); }
        int suesForPeaceBy() const { return ReadField<int>("suesForPeaceBy"); }
        void suesForPeaceBy(int value) const { WriteField<int>("suesForPeaceBy", value); }
        float casualtiesA() const { return ReadField<float>("casualtiesA"); }
        void casualtiesA(float value) const { WriteField<float>("casualtiesA", value); }
        float casualtiesB() const { return ReadField<float>("casualtiesB"); }
        void casualtiesB(float value) const { WriteField<float>("casualtiesB", value); }
        bool allied() const { return ReadField<bool>("allied"); }
        void allied(bool value) const { WriteField<bool>("allied", value); }
        bool defensivePact() const { return ReadField<bool>("defensivePact"); }
        void defensivePact(bool value) const { WriteField<bool>("defensivePact", value); }
        bool accessAinB() const { return ReadField<bool>("accessAinB"); }
        void accessAinB(bool value) const { WriteField<bool>("accessAinB", value); }
        bool accessBinA() const { return ReadField<bool>("accessBinA"); }
        void accessBinA(bool value) const { WriteField<bool>("accessBinA", value); }
        float tradeLink() const { return ReadField<float>("tradeLink"); }
        void tradeLink(float value) const { WriteField<float>("tradeLink", value); }
        float tradeVolume() const { return ReadField<float>("tradeVolume"); }
        void tradeVolume(float value) const { WriteField<float>("tradeVolume", value); }
        int tradeAnchorA() const { return ReadField<int>("tradeAnchorA"); }
        void tradeAnchorA(int value) const { WriteField<int>("tradeAnchorA", value); }
        int tradeAnchorB() const { return ReadField<int>("tradeAnchorB"); }
        void tradeAnchorB(int value) const { WriteField<int>("tradeAnchorB", value); }
        int nextImproveTick() const { return ReadField<int>("nextImproveTick"); }
        void nextImproveTick(int value) const { WriteField<int>("nextImproveTick", value); }
        int envoyRepeatBy() const { return ReadField<int>("envoyRepeatBy"); }
        void envoyRepeatBy(int value) const { WriteField<int>("envoyRepeatBy", value); }
        int nextUltimatumTick() const { return ReadField<int>("nextUltimatumTick"); }
        void nextUltimatumTick(int value) const { WriteField<int>("nextUltimatumTick", value); }
        int refusedUntilAB() const { return ReadField<int>("refusedUntilAB"); }
        void refusedUntilAB(int value) const { WriteField<int>("refusedUntilAB", value); }
        int refusedUntilBA() const { return ReadField<int>("refusedUntilBA"); }
        void refusedUntilBA(int value) const { WriteField<int>("refusedUntilBA", value); }
        int nextRequestTick() const { return ReadField<int>("nextRequestTick"); }
        void nextRequestTick(int value) const { WriteField<int>("nextRequestTick", value); }
        int nextPeaceOfferTick() const { return ReadField<int>("nextPeaceOfferTick"); }
        void nextPeaceOfferTick(int value) const { WriteField<int>("nextPeaceOfferTick", value); }
        int nextPlayerPeaceTick() const { return ReadField<int>("nextPlayerPeaceTick"); }
        void nextPlayerPeaceTick(int value) const { WriteField<int>("nextPlayerPeaceTick", value); }
        int nextAllianceOfferTick() const { return ReadField<int>("nextAllianceOfferTick"); }
        void nextAllianceOfferTick(int value) const { WriteField<int>("nextAllianceOfferTick", value); }
        int nextTradeOfferTick() const { return ReadField<int>("nextTradeOfferTick"); }
        void nextTradeOfferTick(int value) const { WriteField<int>("nextTradeOfferTick", value); }
        int nextUnionOfferTick() const { return ReadField<int>("nextUnionOfferTick"); }
        void nextUnionOfferTick(int value) const { WriteField<int>("nextUnionOfferTick", value); }
        int unionBondFor() const { return ReadField<int>("unionBondFor"); }
        void unionBondFor(int value) const { WriteField<int>("unionBondFor", value); }
        int nextAnnexRequestTick() const { return ReadField<int>("nextAnnexRequestTick"); }
        void nextAnnexRequestTick(int value) const { WriteField<int>("nextAnnexRequestTick", value); }
        int nextVassalageRequestTick() const { return ReadField<int>("nextVassalageRequestTick"); }
        void nextVassalageRequestTick(int value) const { WriteField<int>("nextVassalageRequestTick", value); }
        int nextVassalAnnexDemandTick() const { return ReadField<int>("nextVassalAnnexDemandTick"); }
        void nextVassalAnnexDemandTick(int value) const { WriteField<int>("nextVassalAnnexDemandTick", value); }
        float incHeatAinB() const { return ReadField<float>("incHeatAinB"); }
        void incHeatAinB(float value) const { WriteField<float>("incHeatAinB", value); }
        float incHeatBinA() const { return ReadField<float>("incHeatBinA"); }
        void incHeatBinA(float value) const { WriteField<float>("incHeatBinA", value); }
        int incTierAinB() const { return ReadField<int>("incTierAinB"); }
        void incTierAinB(int value) const { WriteField<int>("incTierAinB", value); }
        int incTierBinA() const { return ReadField<int>("incTierBinA"); }
        void incTierBinA(int value) const { WriteField<int>("incTierBinA", value); }
        int incFlagsAinB() const { return ReadField<int>("incFlagsAinB"); }
        void incFlagsAinB(int value) const { WriteField<int>("incFlagsAinB", value); }
        int incFlagsBinA() const { return ReadField<int>("incFlagsBinA"); }
        void incFlagsBinA(int value) const { WriteField<int>("incFlagsBinA", value); }
        int passageTicksAinB() const { return ReadField<int>("passageTicksAinB"); }
        void passageTicksAinB(int value) const { WriteField<int>("passageTicksAinB", value); }
        int passageTicksBinA() const { return ReadField<int>("passageTicksBinA"); }
        void passageTicksBinA(int value) const { WriteField<int>("passageTicksBinA", value); }
        int expelTicksAinB() const { return ReadField<int>("expelTicksAinB"); }
        void expelTicksAinB(int value) const { WriteField<int>("expelTicksAinB", value); }
        int expelTicksBinA() const { return ReadField<int>("expelTicksBinA"); }
        void expelTicksBinA(int value) const { WriteField<int>("expelTicksBinA", value); }
        int protestTicksAinB() const { return ReadField<int>("protestTicksAinB"); }
        void protestTicksAinB(int value) const { WriteField<int>("protestTicksAinB", value); }
        int protestTicksBinA() const { return ReadField<int>("protestTicksBinA"); }
        void protestTicksBinA(int value) const { WriteField<int>("protestTicksBinA", value); }
        int pledgeTicksAinB() const { return ReadField<int>("pledgeTicksAinB"); }
        void pledgeTicksAinB(int value) const { WriteField<int>("pledgeTicksAinB", value); }
        int pledgeTicksBinA() const { return ReadField<int>("pledgeTicksBinA"); }
        void pledgeTicksBinA(int value) const { WriteField<int>("pledgeTicksBinA", value); }
        int graceTicksAinB() const { return ReadField<int>("graceTicksAinB"); }
        void graceTicksAinB(int value) const { WriteField<int>("graceTicksAinB", value); }
        int graceTicksBinA() const { return ReadField<int>("graceTicksBinA"); }
        void graceTicksBinA(int value) const { WriteField<int>("graceTicksBinA", value); }
        int episodeTicksAinB() const { return ReadField<int>("episodeTicksAinB"); }
        void episodeTicksAinB(int value) const { WriteField<int>("episodeTicksAinB", value); }
        int episodeTicksBinA() const { return ReadField<int>("episodeTicksBinA"); }
        void episodeTicksBinA(int value) const { WriteField<int>("episodeTicksBinA", value); }
        int justifyTicksAB() const { return ReadField<int>("justifyTicksAB"); }
        void justifyTicksAB(int value) const { WriteField<int>("justifyTicksAB", value); }
        int justifyTicksBA() const { return ReadField<int>("justifyTicksBA"); }
        void justifyTicksBA(int value) const { WriteField<int>("justifyTicksBA", value); }
    };
}
